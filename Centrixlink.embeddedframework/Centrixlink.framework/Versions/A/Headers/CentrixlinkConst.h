//
//  CentrixlinkConst.h
//  Centrixlink
//
//  Created by Codi on 30/03/2017.
//  Copyright © 2017 Centrixlink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CentrixlinkConst : NSObject

struct CentrixlinkPosition {
    float top;
    float left;
    float videoScale;
};


UIKIT_EXTERN NSString *const K_AD_INTERSTITIAL_TOP;

UIKIT_EXTERN NSString *const K_AD_INTERSTITIAL_LEFT;

UIKIT_EXTERN NSString *const K_AD_INTERSTITIAL_VIDEOSCALE;



#pragma Delegate 回调字典KEY
/**
 *  广告Key
 */
UIKIT_EXTERN NSString *const ADInfoKEYADID;

/**
 *  是否是缓存广告
 */
UIKIT_EXTERN NSString *const ADInfoKEYPreloadStatus;
/**
 *  视频播放状态，true 为广告播放完毕，false为广告跳过
 */
UIKIT_EXTERN NSString *const ADInfoKEYADPlayStatus;


/**
 * 视频广告是否被点击，true 点击，false 未点击
 */
UIKIT_EXTERN NSString *const ADInfoKEYIsClick;


/**
 *  用于是否插屏广告显示开关
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyInterstitialAD;
/**
 *  支持广告的方向
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyOrientations;
/**
 *  当前App 用户ID，用于激励广告
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyUser;

/**
 *  只播放预加载广告
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyOnlyPreload;


/**
 * 自动关闭EndCard页面，true 为广告自动关闭，false为手动关闭
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyAutoCloseADView;


/**
 *  当前广告标识，用于激励广告
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyPlacement;

/**
 *  插屏广告显示的位置
 */
UIKIT_EXTERN NSString *const ADInterstitialPosition;


/**
 *  其它扩展信息
 */
UIKIT_EXTERN NSString *const ShowADOptionKeyExtraInfoDictionary;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra1;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra2;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra3;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra4;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra5;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra6;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra7;
UIKIT_EXTERN NSString *const ShowADOptionKeyExtra8;

@end
