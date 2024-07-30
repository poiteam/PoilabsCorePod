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
#import <PoilabsCore/PLNStep.h>

@interface PLNRoute : NSObject

- (id)initWithSteps:(NSArray<PLNStep *> *)routeSteps andLength:(double)length targetDirection:(int)direction;

@property(strong, nonatomic) NSArray<PLNStep *> *steps;

@property(assign, nonatomic) double length;

- (NSString *)startingNodeId;

- (NSString *)endingNodeId;

@property(assign, nonatomic) int targetDirection;

- (int)countOfSteps;

@end

#endif /* PLNRoute_h */
