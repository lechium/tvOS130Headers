/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HBUITopShelfContentViewController <NSObject>
@property (assign,nonatomic,__weak) id<HBUITopShelfContentViewControllerDelegate> delegate; 
@property (assign,getter=isContentOccluded,nonatomic) BOOL contentOccluded; 
@property (nonatomic,readonly) unsigned long long contentStyle; 
@required
-(id<HBUITopShelfContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)contentStyle;
-(void)setContentOccluded:(BOOL)arg1;
-(BOOL)isContentOccluded;

@end

