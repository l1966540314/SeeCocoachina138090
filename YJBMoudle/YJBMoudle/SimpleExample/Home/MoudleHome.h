//
//  MoudleHome.h
//  YJBMediator
//
//  Created by YUJIABO on 2019/4/3.
//  Copyright © 2019 YUJIABO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JBMoudleProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol MoudleHome <JBMoudleProtocol>

- (id)interfaceViewController;

@property (nonatomic, copy) NSString *paramterForHome;

@end

NS_ASSUME_NONNULL_END
