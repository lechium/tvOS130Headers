/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/NSCopying.h>
#import <SecurityFoundation/NSSecureCoding.h>

@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {

	id _revocationPolicyInternal;

}

@property (assign,nonatomic) unsigned long long revocationMethods; 
@property (assign,nonatomic) long long networkLookup; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)revocationMethods;
-(long long)networkLookup;
-(id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2 ;
-(void)setRevocationMethods:(unsigned long long)arg1 ;
-(void)setNetworkLookup:(long long)arg1 ;
@end

