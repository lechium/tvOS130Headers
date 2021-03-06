/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXAssetCollectionActionManager.h>
#import <PhotosUICore/PXActivityActionDelegate.h>

@class NSMapTable, NSDictionary, PXAssetCollectionActionPerformer, NSString;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate> {

	NSMapTable* __actionTypeByBarButtonItem;
	NSDictionary* __performerClassesByType;
	PXAssetCollectionActionPerformer* __activePerformer;

}

@property (nonatomic,readonly) NSMapTable * _actionTypeByBarButtonItem;                                                    //@synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem - In the implementation block
@property (nonatomic,readonly) NSDictionary * _performerClassesByType;                                                     //@synthesize _performerClassesByType=__performerClassesByType - In the implementation block
@property (setter=_setActivePerformer:,nonatomic,retain) PXAssetCollectionActionPerformer * _activePerformer;              //@synthesize _activePerformer=__activePerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
-(void)performActivity:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(Class)_firstPossiblePerformerForActionType:(id)arg1 ;
-(id)barButtonItemForActionType:(id)arg1 ;
-(id)alertActionForActionType:(id)arg1 ;
-(id)activityForActionType:(id)arg1 ;
-(void)_handleBarButtonItem:(id)arg1 ;
-(void)_executeActionTypeIfPossible:(id)arg1 ;
-(void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(NSMapTable *)_actionTypeByBarButtonItem;
-(NSDictionary *)_performerClassesByType;
-(PXAssetCollectionActionPerformer *)_activePerformer;
-(void)_setActivePerformer:(id)arg1 ;
@end

