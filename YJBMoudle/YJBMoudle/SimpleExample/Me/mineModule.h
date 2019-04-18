//
//  mineModule.h
//  YJBMediator
//
//  Created by YUJIABO on 2019/4/3.
//  Copyright © 2019 YUJIABO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JBMoudleProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@protocol mineModule <JBMoudleProtocol>

- (void)presentHomeViewController:(UIViewController*)vc;

- (id)interfaceViewController;

@end

NS_ASSUME_NONNULL_END
