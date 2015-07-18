//
//  T8DataBaseModel.h
//  T8DataKitDemo
//
//  Created by 琦张 on 15/6/1.
//  Copyright (c) 2015年 琦张. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DBText  @"text"
#define DBInt   @"integer"
#define DBFloat @"real"
#define DBData  @"blob"
#define DBObject @"object"

@interface T8DataBaseModel : NSObject<NSCoding>

- (id)initWithDict:(NSDictionary *)dict;

- (void)save;
- (void)deleteObject;
+ (NSMutableArray *)queryWithCondition:(NSString *)condition;
+ (void)saveBatchItems:(NSArray *)items;

+ (NSString *)tableName;

@end
