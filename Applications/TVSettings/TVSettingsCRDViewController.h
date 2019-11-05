/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:25 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKViewController.h>
#import <TVSettings/TVSettingsPhotoChooserViewControllerSelectionDataSource.h>
#import <TVSettings/TVSettingsPhotoChooserViewControllerSelectionDelegate.h>

@class TVSettingsCRDPreviewViewController, NSArray, TSKSettingItem, TVSettingsPhotoChooserViewController, NSString;

@interface TVSettingsCRDViewController : TSKViewController <TVSettingsPhotoChooserViewControllerSelectionDataSource, TVSettingsPhotoChooserViewControllerSelectionDelegate> {

	TVSettingsCRDPreviewViewController* _crdPreviewViewController;
	NSArray* _photoCollectionGroups;
	TSKSettingItem* _backgroundPhotoSettingItem;
	TVSettingsPhotoChooserViewController* __CRDBackgroundPhotoViewController;

}

@property (nonatomic,retain) TVSettingsCRDPreviewViewController * crdPreviewViewController;                         //@synthesize crdPreviewViewController=_crdPreviewViewController - In the implementation block
@property (retain) NSArray * photoCollectionGroups;                                                                 //@synthesize photoCollectionGroups=_photoCollectionGroups - In the implementation block
@property (nonatomic,retain) TSKSettingItem * backgroundPhotoSettingItem;                                           //@synthesize backgroundPhotoSettingItem=_backgroundPhotoSettingItem - In the implementation block
@property (nonatomic,retain) TVSettingsPhotoChooserViewController * _CRDBackgroundPhotoViewController;              //@synthesize _CRDBackgroundPhotoViewController=__CRDBackgroundPhotoViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)crdModeFormatter;
+(/*^block*/id)_makeRequireCodeEveryTimeHomeChildViewControllerBlock;
+(void)_removeFromHomeAndEnableEveryTimeCode;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)loadSettingGroups;
-(id)previewForItemAtIndexPath:(id)arg1 ;
-(void)controller:(id)arg1 didSelectAsset:(id)arg2 inCollection:(id)arg3 collectionGroup:(id)arg4 ;
-(id)photoCollectionGroupsForController:(id)arg1 ;
-(void)controller:(id)arg1 didSelectCollectionGroup:(id)arg2 ;
-(void)_showPreview:(id)arg1 ;
-(void)setCrdPreviewViewController:(TVSettingsCRDPreviewViewController *)arg1 ;
-(void)_fetchPhotoCollectionGroups;
-(TVSettingsPhotoChooserViewController *)_CRDBackgroundPhotoViewController;
-(TVSettingsCRDPreviewViewController *)crdPreviewViewController;
-(id)_allowedPhotoCollectionGroups;
-(NSArray *)photoCollectionGroups;
-(void)setPhotoCollectionGroups:(NSArray *)arg1 ;
-(TSKSettingItem *)backgroundPhotoSettingItem;
-(void)setBackgroundPhotoSettingItem:(TSKSettingItem *)arg1 ;
-(void)set_CRDBackgroundPhotoViewController:(TVSettingsPhotoChooserViewController *)arg1 ;
@end
