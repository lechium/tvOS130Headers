/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewTableAttributes.h>
#import <UIKit/UITable_Internal.h>

@protocol UITableConstants;
@class UIColor, NSSet, NSMutableArray, NSMutableSet, UIVisualEffect, UITableViewRowData, NSIndexPath, NSString, UIScrollView, UIView;

@interface UICollectionViewTableLayout : UICollectionViewLayout <UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal> {

	NSSet* _floatingElementKinds;
	UIColor* _separatorColor;
	UIColor* _darkenedSeparatorColor;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _previousLayoutMargins;
	NSMutableArray* _indexPathCache;
	NSMutableSet* _preferredAttributesCache;
	NSMutableSet* _headerPreferredAttributesCache;
	NSMutableSet* _footerPreferredAttributesCache;
	double _memoizedScale;
	BOOL _usesVariableMargins;
	BOOL _overlapsSectionHeaderViews;
	BOOL _showingIndex;
	BOOL _cellLayoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _showsAdditionalSeparators;
	double _rowHeight;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	double _estimatedRowHeight;
	double _estimatedSectionHeaderHeight;
	double _estimatedSectionFooterHeight;
	double _backgroundInset;
	double _topPadding;
	double _bottomPadding;
	UIColor* _accessoryBaseColor;
	UIColor* _multiselectCheckmarkColor;
	id<UITableConstants> _constants;
	double _rowSpacing;
	long long _separatorStyle;
	UIVisualEffect* _separatorEffect;
	UITableViewRowData* _rowData;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	NSIndexPath* _deletedIndexPath;
	CGRect _indexFrame;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                                    //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UITableViewRowData * rowData;                                                                                        //@synthesize rowData=_rowData - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                                                                   //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                                                                   //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (getter=_delegateActual,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegateActual; 
@property (getter=_delegateProxy,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegateProxy; 
@property (getter=_dataSourceActual,nonatomic,readonly) id<UICollectionViewDataSourceTableLayout> dataSourceActual; 
@property (nonatomic,retain) NSIndexPath * deletedIndexPath;                                                                                      //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (assign,setter=_setShowsAdditionalSeparators:,getter=_showsAdditionalSeparators,nonatomic) BOOL showsAdditionalSeparators;              //@synthesize showsAdditionalSeparators=_showsAdditionalSeparators - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                                         //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) double rowHeight;                                                                                                    //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double sectionHeaderHeight;                                                                                          //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double sectionFooterHeight;                                                                                          //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                                                                            //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                                    //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (assign,nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;                                                                           //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                                                                                   //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;                                                                            //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (assign,nonatomic) double estimatedRowHeight;                                                                                           //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionHeaderHeight;                                                                                 //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (assign,nonatomic) double estimatedSectionFooterHeight;                                                                                 //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
@property (getter=_tableStyle,nonatomic,readonly) long long tableStyle; 
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) BOOL sectionContentInsetFollowsLayoutMargins; 
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor; 
@property (getter=_multiselectCheckmarkColor,nonatomic,readonly) UIColor * multiselectCheckmarkColor; 
@property (getter=_numberOfSections,nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) BOOL usesVariableMargins;                                                                                          //@synthesize usesVariableMargins=_usesVariableMargins - In the implementation block
@property (nonatomic,readonly) BOOL overlapsSectionHeaderViews;                                                                                   //@synthesize overlapsSectionHeaderViews=_overlapsSectionHeaderViews - In the implementation block
@property (getter=_backgroundInset,nonatomic,readonly) double backgroundInset;                                                                    //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (getter=_cellSafeAreaInsets,nonatomic,readonly) UIEdgeInsets cellSafeAreaInsets; 
@property (getter=_topPadding,nonatomic,readonly) double topPadding;                                                                              //@synthesize topPadding=_topPadding - In the implementation block
@property (getter=_bottomPadding,nonatomic,readonly) double bottomPadding;                                                                        //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (getter=_isShowingIndex,nonatomic,readonly) BOOL showingIndex;                                                                          //@synthesize showingIndex=_showingIndex - In the implementation block
@property (getter=_indexFrame,nonatomic,readonly) CGRect indexFrame;                                                                              //@synthesize indexFrame=_indexFrame - In the implementation block
@property (getter=_indexBarExtentFromEdge,nonatomic,readonly) double indexBarExtentFromEdge; 
@property (getter=_sectionContentInset,nonatomic,readonly) UIEdgeInsets sectionContentInset; 
@property (getter=_rawSectionContentInset,nonatomic,readonly) UIEdgeInsets rawSectionContentInset; 
@property (getter=_sectionCornerRadius,nonatomic,readonly) double sectionCornerRadius; 
@property (getter=_headerFooterLeadingMarginWidth,nonatomic,readonly) double headerFooterLeadingMarginWidth; 
@property (getter=_headerFooterTrailingMarginWidth,nonatomic,readonly) double headerFooterTrailingMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing;                                                                              //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesHeights,nonatomic,readonly) BOOL estimatesHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(void)dealloc;
-(BOOL)isEditing;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)_scrollView;
-(long long)_numberOfSections;
-(void)setEditing:(BOOL)arg1 ;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setCellLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(void)setEstimatedSectionHeaderHeight:(double)arg1 ;
-(void)setEstimatedSectionFooterHeight:(double)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(UIEdgeInsets)_sectionContentInset;
-(void)_setSectionContentInset:(UIEdgeInsets)arg1 ;
-(double)estimatedRowHeight;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(double)_bottomPadding;
-(UIEdgeInsets)separatorInset;
-(CGSize)collectionViewContentSize;
-(void)setEstimatedRowHeight:(double)arg1 ;
-(void)setRowHeight:(double)arg1 ;
-(double)rowHeight;
-(void)setSectionHeaderHeight:(double)arg1 ;
-(void)setSectionFooterHeight:(double)arg1 ;
-(double)_heightForRowAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)allowsMultipleSelection;
-(CGRect)_visibleRect;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)_viewForHeaderInSection:(long long)arg1 ;
-(id)_viewForFooterInSection:(long long)arg1 ;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(UIEdgeInsets)_contentInset;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(double)_topPadding;
-(id)_delegateProxy;
-(double)sectionHeaderHeight;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(double)sectionFooterHeight;
-(void)finalizeCollectionViewUpdates;
-(BOOL)canBeEdited;
-(void)_swipeToDeleteCell:(id)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(double)_indexBarExtentFromEdge;
-(BOOL)_estimatesSizes;
-(id)_invalidationContextForUpdatedLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(BOOL)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
-(id)_constants;
-(long long)_tableStyle;
-(BOOL)_sectionContentInsetFollowsLayoutMargins;
-(id)_accessoryBaseColor;
-(id)_multiselectCheckmarkColor;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(BOOL)_separatorInsetIsRelativeToCellEdges;
-(double)_backgroundInset;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(BOOL)allowsMultipleSelectionDuringEditing;
-(void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1 ;
-(BOOL)_shouldDrawThickSeparators;
-(double)_rowSpacing;
-(UIEdgeInsets)_rawSeparatorInset;
-(double)estimatedSectionHeaderHeight;
-(double)estimatedSectionFooterHeight;
-(BOOL)usesVariableMargins;
-(BOOL)overlapsSectionHeaderViews;
-(UIEdgeInsets)_cellSafeAreaInsets;
-(BOOL)cellLayoutMarginsFollowReadableWidth;
-(BOOL)_isShowingIndex;
-(CGRect)_indexFrame;
-(UIEdgeInsets)_rawSectionContentInset;
-(double)_sectionCornerRadius;
-(BOOL)_shouldHaveHeaderViewForSection:(long long)arg1 ;
-(BOOL)_shouldHaveFooterViewForSection:(long long)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(void)_darkenedColorsChanged:(id)arg1 ;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(void)_setCollectionView:(id)arg1 ;
-(id)_floatingElementKinds;
-(BOOL)_estimatesRowHeights;
-(BOOL)_estimatesSectionHeaderHeights;
-(BOOL)_estimatesSectionFooterHeights;
-(id)_indexPathsBelowIndexPath:(id)arg1 ;
-(void)_invalidateIndexPathsBelowIndexPath:(id)arg1 withInvalidationContext:(id)arg2 ;
-(NSRange)_sectionRangeForBounds:(CGRect)arg1 ;
-(BOOL)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(long long)arg2 useRowData:(BOOL)arg3 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(double)_heightForTableHeader;
-(double)_heightForTableFooter;
-(long long)_editingStyleForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1 ;
-(BOOL)_canReorderRowAtIndexPath:(id)arg1 ;
-(long long)_indentationLevelForRowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldDrawSeparatorAtTop:(BOOL)arg1 ofSection:(long long)arg2 ;
-(double)_headerFooterLeadingMarginWidth;
-(double)_headerFooterTrailingMarginWidth;
-(id)_layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(CGRect)_frameForSectionElementKind:(id)arg1 atSection:(long long)arg2 visibleRect:(CGRect)arg3 floating:(BOOL*)arg4 canGuess:(BOOL)arg5 ;
-(id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(long long)arg2 ;
-(BOOL)_shouldHaveGlobalViewForElementOfKind:(id)arg1 ;
-(id)_layoutAttributesForViewElementKind:(id)arg1 ;
-(BOOL)_shouldDisplayExtraSeparatorsAtOffset:(double*)arg1 ;
-(CGRect)_extraSeparatorFrameForIndexPath:(id)arg1 offset:(double)arg2 ;
-(id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1 ;
-(BOOL)_shouldApplyReadableWidthInsets;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(void)_separatorColorChanged;
-(id)_delegateActual;
-(id)_dataSourceActual;
-(BOOL)_shouldDrawTopSeparatorDueToMergedBarForSectionAtIndex:(long long)arg1 ;
-(BOOL)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)_tableContentInset;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1 ;
-(double)_defaultCellHeight;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1 ;
-(double)_heightForHeaderInSection:(long long)arg1 useRowData:(BOOL)arg2 ;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1 ;
-(double)_heightForFooterInSection:(long long)arg1 useRowData:(BOOL)arg2 ;
-(double)_heightForHeaderInSection:(long long)arg1 ;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1 ;
-(double)_estimatedHeightForFooterInSection:(long long)arg1 ;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1 ;
-(void)_applyContentSizeDeltaImmediately:(double)arg1 ;
-(id)_titleForHeaderInSection:(long long)arg1 ;
-(id)_titleForFooterInSection:(long long)arg1 ;
-(id)_detailTextForHeaderInSection:(long long)arg1 ;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1 ;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1 ;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1 ;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1 ;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1 ;
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3 ;
-(double)_sidePadding;
-(BOOL)_isTableHeaderAutohiding;
-(BOOL)_providesRowHeights;
-(BOOL)_estimatesHeights;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(BOOL)_shouldUseNewHeaderFooterBehavior;
-(CGPoint)_contentOffsetFromProposedContentOffset:(CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_setShowsAdditionalSeparators:(BOOL)arg1 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(long long)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(BOOL)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
-(BOOL)_wantsSwipes;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(UITableViewRowData *)rowData;
-(void)setRowData:(UITableViewRowData *)arg1 ;
-(NSIndexPath *)deletedIndexPath;
-(void)setDeletedIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)_showsAdditionalSeparators;
@end
