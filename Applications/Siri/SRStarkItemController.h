/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol SRStarkItemController <NSObject>
@property (assign,nonatomic,__weak) id<SRStarkItemControllerDelegate> delegate; 
@property (assign,nonatomic) long long interactionStyle; 
@property (nonatomic,copy) NSUUID * conversationItemIdentifier; 
@property (nonatomic,readonly) BOOL shouldProceedToNextCommandAtSpeechSynthesisEnd; 
@optional
-(void)updateAfterSpeechQueueEmpties;
-(BOOL)shouldProceedToNextCommandAtSpeechSynthesisEnd;

@required
-(id<SRStarkItemControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isActive;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(id)arg1;
-(long long)interactionStyle;
-(void)setInteractionStyle:(long long)arg1;

@end

