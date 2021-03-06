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

+ (void)query:(BmobQuery *)query findWithSuccess:(void(^)(id responseObject))success;

+ (void)queryWithClassName:(NSString *)className
                showHidden:(BOOL)showHidden
                   success:(void(^)(id responseObject))success;

+ (void)queryWithClassName:(NSString *)className
                showHidden:(BOOL)showHidden
                     limit:(NSUInteger)limit
                   success:(void(^)(id responseObject))success;

+ (void)queryWithClassName:(NSString *)className
                showHidden:(BOOL)showHidden
                selectKeys:(NSArray *)selectKeys
                     limit:(NSUInteger)limit
                   success:(void(^)(id responseObject))success;

+ (void)queryWithObjectId:(NSString *)objectId
                className:(NSString *)className
                  success:(void(^)(id responseObject))success;

+ (void)saveClassName:(NSString *)className
           parameters:(NSDictionary *)parameters
              success:(void(^)(id responseObject))success;

+ (void)apiWithName:(NSString *)name success:(void(^)(id responseObject))success;

+ (void)apiWithName:(NSString *)name selectKeys:(NSArray *)selectKeys success:(void(^)(id responseObject))success;

+ (void)updateAPI:(NSString *)apiName
              key:(NSString *)key
            value:(id)value
          success:(void(^)(id responseObject))success;

+ (void)apiToHomeCompletion:(void(^)(id responseObject))completion;

+ (void)hiddenObjectId:(NSString *)objectId
             boolValue:(BOOL)boolValue
             className:(NSString *)className
               success:(void(^)(id responseObject))success;

+ (void)uploadDataArray:(NSArray *)dataArr
            resultBlock:(void(^)(NSMutableArray *urlArr))resultBlock;

+ (void)uploadPathOrData:(id)obj
             resultBlock:(void(^)(NSString *filename, NSString *url))resultBlock;

@end
