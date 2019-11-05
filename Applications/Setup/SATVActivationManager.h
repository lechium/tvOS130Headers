/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:57 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SATVActivatorDelegate.h>

@class NSMutableArray, SATVActivator, NSString;

@interface SATVActivationManager : NSObject <SATVActivatorDelegate> {

	NSMutableArray* _requests;
	SATVActivator* _activator;

}

@property (nonatomic,retain) NSMutableArray * requests;                                                  //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) SATVActivator * activator;                                                  //@synthesize activator=_activator - In the implementation block
@property (getter=isDeviceActivated,nonatomic,readonly) BOOL deviceActivated; 
@property (getter=isDeviceFactoryActivated,nonatomic,readonly) BOOL deviceFactoryActivated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)requestSilentActivationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isDeviceActivated;
-(void)activator:(id)arg1 didFailWithError:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)activator:(id)arg1 didSucceedWithType:(unsigned long long)arg2 ;
-(BOOL)isDeviceFactoryActivated;
-(void)_requestActivationWithNavigationController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_completeActivationRequestWithSuccessType:(unsigned long long)arg1 failureReason:(unsigned long long)arg2 error:(id)arg3 ;
-(void)_startActivationRequestIfPossible;
-(SATVActivator *)activator;
-(void)setActivator:(SATVActivator *)arg1 ;
-(void)requestActivationWithNavigationController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
