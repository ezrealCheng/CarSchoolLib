//
//  NetworkingType.h
//  CarSchool
//
//  Created by Huan on 16/8/13.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetworkingType : NSObject

@property (nonatomic, strong) NSString * baseUrl;

+(NetworkingType *)sharNetworking;

@end
