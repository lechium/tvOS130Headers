/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OTCliqueStatusWrapper, NSString;


@protocol CKKSOctagonStatusMemoizer
@property (readonly) OTCliqueStatusWrapper * octagonStatus; 
@property (readonly) NSString * octagonPeerID; 
@required
-(void)triggerOctagonStatusFetch;
-(void)setHSA2iCloudAccountStatus:(long long)arg1;
-(OTCliqueStatusWrapper *)octagonStatus;
-(NSString *)octagonPeerID;

@end

