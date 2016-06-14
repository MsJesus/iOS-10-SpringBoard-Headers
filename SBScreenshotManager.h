//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;
@protocol SBScreenshotManagerDataSource;

@interface SBScreenshotManager : NSObject
{
    SBSceneManagerCoordinator *_sceneManagerCoordinator;
    _SBScreenshotPersistenceCoordinator *_persistenceCoordinator;
    id <SBScreenshotManagerDataSource> _dataSource;
}

@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) _SBScreenshotPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(retain, nonatomic, getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:) SBSceneManagerCoordinator *sceneManagerCoordinator; // @synthesize sceneManagerCoordinator=_sceneManagerCoordinator;
@property(readonly, nonatomic) id <SBScreenshotManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_providerForScreen:(id)arg1;
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;
- (void)saveScreenshotsWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveScreenshots;
- (id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3;
- (id)initWithDataSource:(id)arg1;

@end
