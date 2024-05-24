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

@interface PLCoreWrapper : NSObject
-(void)createGraph:(NSArray<NSDictionary *> *)poiDataArray;
- (PLNRoute *)findShortestPathFrom:(NSString *)startNode to:(NSString *)endNode;
- (NSString *)findNearestPointWithType:(NSString *)pointType from:(NSString *)startNodeId;
- (NSArray<NSString *> *)sortNodesByDistance:(NSString *)startNode pois:(NSArray<NSString *> *)poiIds;
- (void)setFloorChangeMethods:(NSArray<NSString *> *)floorChangeMethods;
- (void)removeSegment:(NSString *)fromNodeId to:(NSString *)endNodeId;
- (void)setRouteStepTypes:(NSArray<NSString *> *)pointTypes;
- (NSArray<PLNRoute *> *)getRouteForMultiplePoints:(NSArray<NSString *> *)pointIds from:(NSString *)startPoint;
@end


#endif /* PLCore_h */
