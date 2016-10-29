//
//  DrmServerHelper.h
//  CarSchoolLib
//
//
//  需要使用视频先启动 DWDrmServer
//
//
//  Created by 程宜 on 2016/10/10.
//  Copyright © 2016年 ChengYi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DWDrmServer.h"

@interface DrmServerHelper : NSObject

+ (DrmServerHelper *)shareDrmServer;

/// 需要的时候在AppDelegate 中的  applicationDidBecomeActive  方法中调用
- (void) starDrmServer;

/// 需要的时候在AppDelegate 中的  applicationWillResignActive  方法中调用
- (void) stopDrmServer;

@property (strong, nonatomic)DWDrmServer * drmServer;

@end
