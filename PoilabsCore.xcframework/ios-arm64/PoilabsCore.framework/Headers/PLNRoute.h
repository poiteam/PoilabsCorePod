//
//  PLNRoute.h
//  PoilabsNavigation
//
//  Created by Emre Kuru on 30.05.2023.
//  Copyright © 2023 poilabs. All rights reserved.
//

#ifndef PLNRoute_h
#define PLNRoute_h

#import <Foundation/Foundation.h>

@interface PLNRoute : NSObject

- (id)initWithSteps:(NSArray<NSArray<NSString *> *> *)routeSteps andLength:(double) length;

@property (nonatomic, readonly) NSArray<NSArray<NSString *> *> *steps;

@property (nonatomic, readonly) double length;

- (NSString *)startingNodeId;

- (NSString *)endingNodeId;

- (int)countOfSteps;

@end

#endif /* PLNRoute_h */
