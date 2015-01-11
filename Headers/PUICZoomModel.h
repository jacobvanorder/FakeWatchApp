//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray;

@interface PUICZoomModel : NSObject
{
    CADisplayLink *_displayLink;
    _Bool _nudgeSetZoomEnable;
    double _snapRange;
    double _nudgeRange;
    double _minMovementTimeout;
    double _maxMovementTimeout;
    double _velocityTimeoutFactor;
    double _lisaRatio;
    double _snapSpeed;
    double _animateSpeed;
    unsigned char _velocityAverageDepth;
    unsigned char _velocityUIAverageDepth;
    double _startVelocityThreshold;
    double _runVelocityThreshold;
    double _stopTimeout;
    double _nonWeightedRatio;
    double _zoomAnimationSpeed;
    double _lastZoom;
    BOOL _snapDirection;
    double _nudgedAtZoom;
    double _cumulativeLisaDistance;
    double _velocity;
    NSMutableArray *_oldVelocities;
    double _UIVelocity;
    NSMutableArray *_UIVelocities;
    double _movementTimer;
    double _movementTimeout;
    double _startZoomLevel;
    int _lisaState;
    int _previousLisaState;
    _Bool _didRedraw;
    _Bool _crownEnabled;
    _Bool _weightedAtIntegerLevels;
    _Bool _updating;
    _Bool _shouldNotNudge;
    id <PUICZoomModelDelegate> _delegate;
    double _zoomLevel;
    double _animatedZoomLevel;
    double _maxZoomLevel;
    double _minZoomLevel;
    double _clientZoom;
}

+ (double)appFullZoomLevel;
@property(nonatomic) double clientZoom; // @synthesize clientZoom=_clientZoom;
@property(nonatomic) _Bool shouldNotNudge; // @synthesize shouldNotNudge=_shouldNotNudge;
@property(readonly, nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) _Bool weightedAtIntegerLevels; // @synthesize weightedAtIntegerLevels=_weightedAtIntegerLevels;
@property(nonatomic) double minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic) double maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) _Bool crownEnabled; // @synthesize crownEnabled=_crownEnabled;
@property(readonly, nonatomic) double animatedZoomLevel; // @synthesize animatedZoomLevel=_animatedZoomLevel;
@property(readonly, nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) __weak id <PUICZoomModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setUpdating:(_Bool)arg1;
- (void)updateZoomLevelDisplayLink:(id)arg1;
- (void)updateZoomLevel;
- (void)updateZoomWithDistance:(double)arg1;
- (void)_changeLisaState:(int)arg1;
- (double)closestNudgeZoom;
- (double)closestZoom;
- (_Bool)atZoomLevel;
- (_Bool)isZoomAnimating;
- (void)addCrownTicks:(long long)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)setZoomLevelSimulated:(double)arg1;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2 nudge:(_Bool)arg3;
- (void)_setZoomLevel:(double)arg1;
- (void)_setAnimatedZoomLevel:(double)arg1;
- (void)setZoomLevelFromListener:(double)arg1;
- (id)init;

@end

