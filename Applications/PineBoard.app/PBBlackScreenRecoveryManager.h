/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSystemOverlayControllerDelegate.h>
#import <PineBoard/PBSystemUIManaging.h>

@class PBSystemOverlayController, TVSUIBlackScreenRecoveryIterator, NSString;

@interface PBBlackScreenRecoveryManager : NSObject <PBSystemOverlayControllerDelegate, PBSystemUIManaging> {

	PBSystemOverlayController* _overlayController;
	TVSUIBlackScreenRecoveryIterator* _recoveryIterator;

}

@property (nonatomic,readonly) PBSystemOverlayController * overlayController;                    //@synthesize overlayController=_overlayController - In the implementation block
@property (nonatomic,readonly) TVSUIBlackScreenRecoveryIterator * recoveryIterator;              //@synthesize recoveryIterator=_recoveryIterator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPresenting,nonatomic,readonly) BOOL presenting; 
+(id)sharedInstance;
-(id)init;
-(void)dismiss;
-(BOOL)isPresenting;
-(PBSystemOverlayController *)overlayController;
-(void)presentForDisplayModes:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(TVSUIBlackScreenRecoveryIterator *)recoveryIterator;
@end
