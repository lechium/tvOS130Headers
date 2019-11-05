/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSMutableArray, NSData, Signature;

@interface PublicKeysResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * appLeafsArray; 
@property (nonatomic,readonly) unsigned long long appLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * tltLeafsArray; 
@property (nonatomic,readonly) unsigned long long tltLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * intermediatesArray; 
@property (nonatomic,readonly) unsigned long long intermediatesArray_Count; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (nonatomic,retain) Signature * vrfSignature; 
@property (assign,nonatomic) BOOL hasVrfSignature; 
@property (nonatomic,copy) NSData * vrfPublicKey; 
+(id)descriptor;
@end
