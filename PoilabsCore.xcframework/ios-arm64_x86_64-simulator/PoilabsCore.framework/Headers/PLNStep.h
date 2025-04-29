//
//  PLNStep.h
//  PoilabsCore
//
//  Created by Emre Kuru on 9.05.2024.
//

#ifndef PLNStep_h
#define PLNStep_h
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PLNStepType) {
    PLNStepTypeLeft,
    PLNStepTypeLeftAt,
    PLNStepTypeSlightlyLeft,
    PLNStepTypeSlightlyLeftAt,
    PLNStepTypeRight,
    PLNStepTypeRightAT,
    PLNStepTypeSlightlyRight,
    PLNStepTypeSlightlyRightAt,
    PLNStepTypeStraight,
    PLNStepTypeUp,
    PLNStepTypeUpOne,
    PLNStepTypeUpZeroMeter,
    PLNStepTypeUpZeroMeterOne,
    PLNStepTypeDown,
    PLNStepTypeDownOne,
    PLNStepTypeDownZeroMeter,
    PLNStepTypeDownZeroMeterOne,
    PLNStepTypeArrived,
    PLNStepTypeArrivedZeroMeter,
    PLNStepTypeBuildingPass,
    PLNStepTypeBuildingPassZeroMeter,
    PLNStepTypeArrivedAfterElevator
};

@interface PLNStep : NSObject

- (id)initWithSteps:(NSArray<NSString *> *)pointIds andLength:(int)length stepType:(PLNStepType)type directionPointId:(NSString *)directionPoint destinationFloorLevel:(int)floorLevel;

@property(strong, nonatomic) NSArray<NSString *> *pointIds;

@property(assign, nonatomic) int length;

@property(assign, nonatomic) PLNStepType type;

@property(strong, nonatomic) NSString *directionPointId;

@property(assign, nonatomic) int destinationFloorLevel;

@end

#endif /* PLNStep_h */
