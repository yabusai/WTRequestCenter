//
//  WTRequestCenter.h
//  TestCache
//
//  Created by song on 14-7-19.
//  Copyright (c) 2014年 song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTRequestCenter : NSObject

//清除所有缓存
+(void)clearAllCache;

//停止所有的请求  建议在NavigationController pop之前调用
+(void)stopAllRequest;

//当前缓存大小
+(NSUInteger)currentDiskUsage;

//清除请求的缓存
+(void)removeRequestCache:(NSURLRequest*)request;


#pragma mark - GET
//get请求
+(NSURLRequest*)getWithURL:(NSURL*)url
         completionHandler:(void (^)(NSURLResponse* response,NSData *data,NSError *error))handler;


#pragma mark - POST
//post 请求
+(NSURLRequest*)postWithURL:(NSURL*)url
                     params:(NSDictionary*)dict
          completionHandler:(void (^)(NSURLResponse* response,NSData *data,NSError *error))handler;

#pragma mark - Image
+(void)getImageWithURL:(NSURL*)url imageComplectionHandler:(void(^) (UIImage* image))handler;
@end
