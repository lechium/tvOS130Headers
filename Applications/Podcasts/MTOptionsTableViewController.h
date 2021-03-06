/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController {

	/*^block*/id _optionSelectedBlock;
	MTOptionSetting* _option;

}

@property (nonatomic,retain) MTOptionSetting * option;              //@synthesize option=_option - In the implementation block
@property (nonatomic,copy) id optionSelectedBlock;                  //@synthesize optionSelectedBlock=_optionSelectedBlock - In the implementation block
+(double)rowHeight;
+(id)footerFont;
+(id)optionFont;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)selectedIndex;
-(id)headerText;
-(MTOptionSetting *)option;
-(void)setOption:(MTOptionSetting *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithOption:(id)arg1 ;
-(id)footerText;
-(id)metricsName;
-(void)_updateTextColorForCell:(id)arg1 selected:(BOOL)arg2 ;
-(id)initWithOption:(id)arg1 largeTitleDisplayMode:(long long)arg2 ;
-(void)updateRowHeight;
-(id)newFooterView;
-(id)optionSelectedBlock;
-(void)setOptionSelectedBlock:(id)arg1 ;
@end

