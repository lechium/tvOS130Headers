/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REContentEncodable.h>
#import <RelevanceEngine/NSCopying.h>
#import <RelevanceEngine/NSSecureCoding.h>

@class NSString;

@interface RETextContentProvider : NSObject <REContentEncodable, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * contentEncodedString; 
+(BOOL)supportsSecureCoding;
+(id)contentProviderFromAttributedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)contentEncodedString;
-(id)attributedStringRepresentation;
@end

