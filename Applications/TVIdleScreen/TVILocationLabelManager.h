/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVIdleScreen.app/TVIdleScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class TVILocationLabelView, TVSStateMachine, NSObject;

@interface TVILocationLabelManager : NSObject {

	TVILocationLabelView* _locationLabelView;
	TVSStateMachine* _stateMachine;
	NSObject*<OS_dispatch_source> _hideLabelViewTimer;

}

@property (nonatomic,retain) TVILocationLabelView * locationLabelView;                      //@synthesize locationLabelView=_locationLabelView - In the implementation block
@property (nonatomic,retain) TVSStateMachine * stateMachine;                                //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> hideLabelViewTimer;              //@synthesize hideLabelViewTimer=_hideLabelViewTimer - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(TVSStateMachine *)stateMachine;
-(void)setStateMachine:(TVSStateMachine *)arg1 ;
-(void)_resetTimer;
-(void)_cancelTimer;
-(void)_initializeStateMachine;
-(/*^block*/id)_machineStateChangeHandler;
-(NSObject*<OS_dispatch_source>)hideLabelViewTimer;
-(TVILocationLabelView *)locationLabelView;
-(void)setHideLabelViewTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithLocationLabelView:(id)arg1 ;
-(void)handleTap;
-(void)handleChangeAerialWithContext:(id)arg1 ;
-(void)setLocationLabelView:(TVILocationLabelView *)arg1 ;
@end
