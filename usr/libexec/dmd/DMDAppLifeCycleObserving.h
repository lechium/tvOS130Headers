/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMDAppLifeCycleObserving <NSObject>
@optional
-(void)didFailInstallingForLifeCycle:(id)arg1;
-(void)didFinishUpdatingForLifeCycle:(id)arg1;
-(void)willStartInstallingForLifeCycle:(id)arg1;
-(void)didStartInstallingForLifeCycle:(id)arg1;
-(void)didChangeInstallingProgressForLifeCycle:(id)arg1;
-(void)didPauseInstallingForLifeCycle:(id)arg1;
-(void)didResumeInstallingForLifeCycle:(id)arg1;
-(void)didCancelInstallingForLifeCycle:(id)arg1;
-(void)didFinishInstallingForLifeCycle:(id)arg1;
-(void)willStartUpdatingForLifeCycle:(id)arg1;
-(void)didStartUpdatingForLifeCycle:(id)arg1;
-(void)didChangeUpdatingProgressForLifeCycle:(id)arg1;
-(void)didPauseUpdatingForLifeCycle:(id)arg1;
-(void)didResumeUpdatingForLifeCycle:(id)arg1;
-(void)didCancelUpdatingForLifeCycle:(id)arg1;
-(void)didFailUpdatingForLifeCycle:(id)arg1;
-(void)willStartUninstallingForLifeCycle:(id)arg1;
-(void)didFailUninstallingForLifeCycle:(id)arg1;
-(void)didFinishUninstallingForLifeCycle:(id)arg1;

@end
