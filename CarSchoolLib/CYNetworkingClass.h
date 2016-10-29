//
//  CYNetworkingClass.h
//  CarSchool
//
//  Created by Huan on 16/8/10.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CYNetworkingClass : NSObject

// 相当于定义一个函数指针
typedef void(^CallBack)(NSDictionary *dicData);


// 相当于定义一个函数指针
typedef void(^CallBackFailure)(NSError *failure);

/////ios自带的post请求方式
//+(void)postddByByUrlPath:(NSString *)path andParams:(NSDictionary *)params andHUDStateString:(NSString *)strState andHUDErrorString:(NSString *)strError andHUDSuccessString:(NSString *)strSuccess andCallBack:(CallBack)callback andFailure:(CallBackFailure)failure;

///如果需要加密的情况下，strEncryption字符串为URL+变量拼接  否则传空字符串即可
+(void)postddByByUrlPath:(NSString *)path andParams:(NSDictionary *)params andCallBack:(CallBack)callback andFailure:(CallBackFailure)failure;

+(void)downLoadByByUrlPath:(NSString *)path andCallBack:(CallBack)callback andFailure:(CallBackFailure)failure;

+ (void)AFNetworkStatus;

@end
