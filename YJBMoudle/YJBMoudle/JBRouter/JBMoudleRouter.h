//
//  JBMoudleRouter.h
//  YJBMediator
//
//  Created by YUJIABO on 2019/4/2.
//  Copyright © 2019 YUJIABO. All rights reserved.
//
//模块调用中间件
#import <Foundation/Foundation.h>
#import "JBMoudleProtocol.h"
NS_ASSUME_NONNULL_BEGIN
@interface JBMoudleRouter : NSObject<NSCopying,NSMutableCopying>

/**
 单例路由
 @return 路由实例
 */
+ (instancetype)router;

/**
 通过协议获取对应的Module每次调用都会创建一个新的Module对象
 @param protocol 协议
 @return 对应的组件实例（比如ModuleA，ModuleB...）
 */
- (id)interfaceForProtocol:(Protocol *)protocol;

/**
 通过协议获取对应的Module并且缓存Module对象，第一次创建Module对象，后面直接从缓存中取
 @param protocol 协议
 @return 对应的组件实例
 */
- (id)interfaceCacheModuleForProtocol:(Protocol *)protocol;

@end

NS_ASSUME_NONNULL_END
