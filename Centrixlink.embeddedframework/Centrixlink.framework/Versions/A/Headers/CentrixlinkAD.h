//
//  CentrixlinkAD.h
//  Centrixlink
//
//  Created by 王俊拯 on 16/6/14.
//  Copyright © 2016年 Centrixlink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CLSLog.h"


NS_ASSUME_NONNULL_BEGIN

@class UIViewController;


#pragma Delegate 回调字典KEY
/**
 *  广告Key
 */
extern NSString* ADInfoKEYADID;

/**
 *  是否是缓存广告
 */
extern NSString* ADInfoKEYPreloadStatus;
/**
 *  视频播放状态，true 为广告播放完毕，false为广告跳过
 */
extern NSString* ADInfoKEYADPlayStatus;
/**
 *  用于是否插屏广告显示开关
 */
extern NSString* ShowADOptionKeyInterstitialAD;
/**
 *  支持广告的方向
 */
extern NSString* ShowADOptionKeyOrientations;
/**
 *  当前App 用户ID，用于激励广告
 */
extern NSString* ShowADOptionKeyUser;

/**
 *  只播放预加载广告
 */
extern NSString* ShowADOptionKeyOnlyPreload;
/**
 *  当前广告标识，用于激励广告
 */
extern NSString* ShowADOptionKeyPlacement;
/**
 *  其它扩展信息
 */
extern NSString* ShowADOptionKeyExtraInfoDictionary;
extern NSString* ShowADOptionKeyExtra1;
extern NSString* ShowADOptionKeyExtra2;
extern NSString* ShowADOptionKeyExtra3;
extern NSString* ShowADOptionKeyExtra4;
extern NSString* ShowADOptionKeyExtra5;
extern NSString* ShowADOptionKeyExtra6;
extern NSString* ShowADOptionKeyExtra7;
extern NSString* ShowADOptionKeyExtra8;


/**
 *   自定义debug输出block
 *
 *  @param message debug 内容
 *  @param level   debug 级别,具体定义
 
 */

typedef void (^CentrixLinkADDebugBlock)(NSString *message, CLSLogLevel level);


@protocol CentrixLinkADDelegate <NSObject>

@optional


- (void)centrixLinkADPreloadADStatusChange:(BOOL)hasPreload;

/**
 *    广告即将显示
 *
 *  @param ADInfo 广告信息
 */

- (void)centrixLinkADWillShowAD:(NSDictionary *)ADInfo;

/**
 *   广告完成显示
 *
 *  @param ADInfo 广告信息
 */
- (void)centrixLinkADDidShowAD:(NSDictionary *)ADInfo;

/**
 *   广告显示即将关闭
 *   注：当广告有成功点击跳转才被调用
 *  @param ADInfo 广告信息
 */
- (void)centrixLinkADWillCloseAD:(NSDictionary *)ADInfo;


/**
 *   广告显示已关闭
 *
 *  @param ADInfo 广告信息及广告播放错误信息
 */
- (void)centrixLinkADDidCloseAD:(NSDictionary *)ADInfo;


/**
 *   广告视频播放完毕状态
 *
 *  @param ADInfo 广告信息
 */
- (void)centrixLinkADVideoDidPlayStatus:(NSDictionary *)ADInfo;


@end




@interface CentrixlinkAD : NSObject

/**   代理
 *
 */
@property (nonatomic, weak) id<CentrixLinkADDelegate>delegate;

/**
 *   单例
 *
 *  @return Centrixlink 类对象
 */

+ (CentrixlinkAD *)sharedInstance;



+ (NSString *)SDKVersion;
/**
 *   启动SDK方法
 *
 *  @param appID        申请的APPID KEY 字符串
 *  @param AppSecretKey 申请的AppSecretkey 字符串
 *  @param error        成功返回nil, 失败返回Error信息
 */
- (BOOL)startWithAppID:(NSString *)appID AppSecretKey:(NSString *)AppSecretKey error:(NSError * __autoreleasing*)error;


/**
 *   检查当前是否可以显示广告包括实时广告及预加载广告
 *   每次播放广告前请进行判断，防止无广告显示。
 *   @return true 可以播放广告，false 暂时不能播放广告；
 */
- (BOOL)isShowableAD;


/**
 *  是否有效的预加载广告
 *
 *  @return true 有预加载广告，false 暂无预加载广告
 */
- (BOOL)hasPreloadAD;


/**
 *   播放广告
 *
 *  @param ViewController 当前显示页面ViewController对象
 *  @param options        自定义上传跟此次广告播放相关数据，便于跟踪广告及广告激励
 *  @param error          播放失败返回
 *
 *  @return true 成功播放，false 播放失败
 */
- (BOOL)showAD:(UIViewController *)ViewController options:(NSDictionary *)options error:(NSError * __autoreleasing*)error;



/**
 *   DeBug开关显示
 *
 *  @param enable true 开启debug，false 关闭debug
 */
- (void)setDebugEnable:(BOOL)enable;


/**
 *   自定义debug 内容回调显示
 *
 *  @param debugBlock debugBlock，若不设置则在Xcode debug中显示，
 */
- (void)setDebugBlock:(CentrixLinkADDebugBlock)debugBlock;

@end


NS_ASSUME_NONNULL_END
