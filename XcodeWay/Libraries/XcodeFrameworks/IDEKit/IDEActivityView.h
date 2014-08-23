/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayerHostingView.h"

#import "IDEActivityViewDataConsumer-Protocol.h"

@class CALayer, CAReplicatorLayer, IDEActivityIssuesContainerLayer, IDEActivityMultiActionIndicatorLayer, IDEActivityReport, IDEActivityReportLayer, IDEActivityViewDataSource, IDEWorkspaceWindowController, NSImage, NSMapTable;

@interface IDEActivityView : DVTLayerHostingView <IDEActivityViewDataConsumer>
{
    IDEActivityMultiActionIndicatorLayer *_multiActionIndicatorLayer;
    IDEActivityIssuesContainerLayer *_issuesContainerLayer;
    IDEActivityReportLayer *_currentActivityReportLayer;
    NSImage *_cachedLCDImageBackgroundLayerContents;
    CAReplicatorLayer *_reportLayerSeparatorsLayer;
    CALayer *_reportLayerContainerLayer;
    CALayer *_lcdImageBackgroundLayer;
    CALayer *_containerLayer;
    IDEWorkspaceWindowController *_workspaceWindowController;
    NSMapTable *_strongReportsToStrongReportLayers;
    IDEActivityViewDataSource *_dataSource;
    struct {
        unsigned int setup:1;
        unsigned int displayedReportIsCompleted:1;
        unsigned int issuesLayerWasMadeVisible:1;
        unsigned int forcedDisplayedReportUpdateIsScheduled:1;
        unsigned int _reserved:4;
    } _flags;
}

+ (struct CGSize)defaultSizeForToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
+ (struct CGSize)scaledSizeWithMaximumWidth:(double)arg1 forToolbarDisplayMode:(unsigned long long)arg2 sizeMode:(unsigned long long)arg3;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)activityReportLayerForReport:(id)arg1;
- (void)activityReportListDidChangeForActivityViewDataSource:(id)arg1;
- (id)activityReportManager;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(id)arg1;
- (id)activityReports;
- (struct CGColor *)activityViewBorderCGColorNoAlpha;
- (void)activityViewCommonInit;
- (void)activityViewDataSource:(id)arg1 activityReportDidComplete:(id)arg2;
- (void)activityViewDataSource:(id)arg1 displayDelayTimeWasMetForActivityReport:(id)arg2;
- (void)activityViewDataSource:(id)arg1 issueCountDidChangeForIssueCategory:(id)arg2;
- (void)activityViewDataSource:(id)arg1 minimumDisplayTimeWasMetForActivityReport:(id)arg2;
- (void)activityViewDataSource:(id)arg1 workspaceRepresentingTypeStringDidChangeTo:(id)arg2;
- (id)bottomHighlightShadow;
- (id)cachedLCDImageBackgroundLayerContents;
- (void)cancelDisplayedReport:(id)arg1;
- (void)chooseAndDisplayNextActivityReportAfterChangeInReports;
- (void)chooseAndDisplayNextActivityReportAfterIdlePreDelay;
- (void)chooseAndDisplayNextActivityReportAfterMinimumTimeExpiredOrDelayExpired;
- (void)chooseAndDisplayNextActivityReportAfterReportCompleted;
@property struct CGSize contentSize;
- (void)delayedSetDisplayedReport:(id)arg1;
@property(readonly) IDEActivityReport *displayedReport;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)innerGlowShadow;
- (struct CGRect)insetRootLayerBounds;
- (struct CGRect)issuesContainerLayerFrame;
- (void)makeSureIssuesLayerIsVisible;
- (struct CGRect)multiActionIndicatorLayerFrame;
- (id)nextActivityReportToDisplay;
- (void)openActivityPopUp;
- (void)openIssuesNavigator;
- (id)orderedActivityReports;
- (void)scheduleForcedDisplayedReportUpdate;
- (void)setActivityReportLayer:(id)arg1 forReport:(id)arg2;
- (void)setDisplayedReport:(id)arg1;
@property IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void)setup;
- (void)setupLayers;
- (void)setupOrTearDown;
- (void)sizeToFitToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
- (void)stopObservingActivityReports;
- (void)tearDown;
- (void)teardownLayers;
- (void)tryToDisplayReport:(id)arg1;
- (void)unschedulePendingForcedDisplayedReportUpdate;
- (void)updateMultiActionIndicator;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (id)workspace;
- (id)workspaceDocument;
- (id)workspaceTabController;

@end
