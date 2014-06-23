//
//  HttpBmobClient.h
//  WenStore
//
//  Created by ccxdd on 14-6-21.
//  Copyright (c) 2014年 ccxdd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BmobSDK/Bmob.h>

@interface HttpBmobClient : NSObject

+ (instancetype)sharedInstance;

+ (void)query:(BmobQuery *)query findWithSuccess:(void(^)(id responseObject))success;

+ (void)queryWithClassName:(NSString *)className
                   success:(void(^)(id responseObject))success;

+ (void)categoryWithName:(NSString *)name
                filePath:(NSString *)filePath
                objectId:(NSString *)objectId
                     sub:(NSArray *)sub
                   isNew:(BOOL)isNew
                 success:(void(^)(id responseObject))success;

+ (void)subCategoryWithName:(NSString *)name
                   filePath:(NSString *)filePath
                   objectId:(NSString *)objectId
                       main:(NSArray *)main
                      isNew:(BOOL)isNew
                    success:(void(^)(id responseObject))success;

+ (void)uploadFilePath:(NSString *)path
             className:(NSString *)className
           resultBlock:(void(^)(BmobFile *fileObj))resultBlock;

@end
