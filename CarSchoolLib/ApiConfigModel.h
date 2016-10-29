//
//  ApiConfigModel.h
//  CarSchool
//
//  Created by dev on 16/8/20.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApiConfigModel : NSObject

@property(nonatomic, assign) NSInteger  AppSwitchThirdPartyLogin;

@property(nonatomic, assign) NSInteger  AppSwitchCourseMaskInfo;

@property(nonatomic, assign) NSInteger  AppSwitchMyOrderShow;

@property(nonatomic, assign) NSInteger  AppSwitchCourseEvaluateShow;

@property(nonatomic, assign) NSInteger  AppSwitchTeacherShow;

@property(nonatomic, assign) NSInteger  AppSwitchPGCShow;

@property (nonatomic, assign) NSInteger AppSwitchNeedLogin;

@property(nonatomic, strong) NSString *strCCUserID;

@property(nonatomic, strong) NSString *strCCAppKey;


+(ApiConfigModel *)shareConfigModel;
-(void)updateConfigModel:(ApiConfigModel *)configModel;
@end
