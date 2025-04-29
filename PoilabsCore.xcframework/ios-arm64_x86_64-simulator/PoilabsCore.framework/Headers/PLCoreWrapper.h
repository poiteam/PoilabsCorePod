//
//  PLCore.h
//  PoilabsNavigation
//
//  Created by Emre Kuru on 18.05.2023.
//  Copyright © 2023 poilabs. All rights reserved.
//

#ifndef PLCore_h
#define PLCore_h

#import <Foundation/Foundation.h>
#import <PoilabsCore/PLNRoute.h>
#import <CoreLocation/CoreLocation.h>

@protocol PLCoreDelegate <NSObject>

-(void)didStepUpdateForRouteIndex:(int)routeIndex stepIndex:(int)stepIndex withDistance:(int)distance toDirection:(int)direction;
-(void)isOnStepChangeForRouteIndex:(int)routeIndex stepIndex:(int)stepIndex forStepType:(PLNStepType)stepType;

@end

@interface PLCoreWrapper : NSObject

@property(strong, nonatomic) id<PLCoreDelegate> delegate;

-(void)createGraph:(NSArray<NSDictionary *> *)poiDataArray;
- (PLNRoute *)findShortestPathFrom:(NSString *)startNode to:(NSString *)endNode;
- (NSString *)findNearestPointWithType:(NSString *)pointType from:(NSString *)startNodeId;
- (NSArray<NSString *> *)sortNodesByDistance:(NSString *)startNode pois:(NSArray<NSString *> *)poiIds;
- (void)setFloorChangeMethods:(NSArray<NSString *> *)floorChangeMethods;
- (void)removeSegment:(NSString *)fromNodeId to:(NSString *)endNodeId;
- (void)clearRemovedSegments;
- (void)setRouteStepTypes:(NSArray<NSString *> *)pointTypes;
- (NSArray<PLNRoute *> *)getRouteForMultiplePoints:(NSArray<NSString *> *)pointIds from:(NSString *)startPoint;
- (void)updateLocationFor:(CLLocationCoordinate2D)coordinate andHeading:(double)heading;
-(NSArray<PLNStep *> *)getRemainingStepsFrom:(CLLocationCoordinate2D)coordinate;
- (void)setStepUpdateDistance:(int)distance;
- (void)setConversionFactor:(double)conversionFactor;
- (BOOL)isThereAlternativeRouteWithoutSegmentFrom:(NSString *)startNodeId
                                              to:(NSString *)endNodeId
                                removingSegmentFrom:(NSString *)removedSegmentStart
                                                to:(NSString *)removedSegmentEnd;

@end


#endif /* PLCore_h */
