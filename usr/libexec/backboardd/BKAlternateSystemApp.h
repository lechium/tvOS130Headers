/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKSProcessDelegate.h>

@protocol BKAlternateSystemAppDelegate, OS_dispatch_queue;
@class NSString, NSDictionary, BKSProcess, NSObject;

@interface BKAlternateSystemApp : NSObject <BKSProcessDelegate> {

	NSString* _bundleID;
	id<BKAlternateSystemAppDelegate> _delegate;
	NSDictionary* _options;
	BKSProcess* _process;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * bundleID;                                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                          //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) BKSProcess * process;                                          //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<BKAlternateSystemAppDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleInfoOverrides;
-(NSString *)description;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)options;
-(id<BKAlternateSystemAppDelegate>)delegate;
-(void)setDelegate:(id<BKAlternateSystemAppDelegate>)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)launch;
-(BOOL)terminate;
-(void)process:(id)arg1 didExitWithContext:(id)arg2 ;
-(BKSProcess *)process;
-(void)setProcess:(BKSProcess *)arg1 ;
-(id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3 ;
-(void)_noteLaunchFailed;
-(void)_noteLaunchSucceeded;
-(void)_noteExitedWithContext:(id)arg1 ;
@end

