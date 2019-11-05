/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCActionDonationSet : NSObject {

	NSMutableArray* _predictedActions;
	NSMutableArray* _recentActions;
	NSMutableArray* _appSuggestedActions;

}

@property (nonatomic,readonly) NSMutableArray * predictedActions;                 //@synthesize predictedActions=_predictedActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentActions;                    //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * appSuggestedActions;              //@synthesize appSuggestedActions=_appSuggestedActions - In the implementation block
-(id)init;
-(NSMutableArray *)appSuggestedActions;
-(NSMutableArray *)recentActions;
-(NSMutableArray *)predictedActions;
@end
