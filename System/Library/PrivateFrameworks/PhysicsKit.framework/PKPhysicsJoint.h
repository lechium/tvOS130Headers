/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/NSSecureCoding.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSSecureCoding> {

	BOOL _inUse;
	BOOL _implicit;
	unsigned* _baseJoint : 2Joint;
	PKPhysicsBody* _bodyA;
	PKPhysicsBody* _bodyB;

}

@property (assign,nonatomic) unsigned* _joint : 2Joint; 
@property (nonatomic,readonly) unsigned* _jointDef : 2JointDef; 
@property (nonatomic,retain) PKPhysicsBody * bodyA;                          //@synthesize bodyA=_bodyA - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * bodyB;                          //@synthesize bodyB=_bodyB - In the implementation block
@property (nonatomic,readonly) CGVector reactionForce; 
@property (nonatomic,readonly) double reactionTorque; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)create;
-(BOOL)_implicit;
-(BOOL)_inUse;
-(void)set_inUse:(BOOL)arg1 ;
-(PKPhysicsBody *)bodyA;
-(PKPhysicsBody *)bodyB;
-(void)setBodyA:(PKPhysicsBody *)arg1 ;
-(void)setBodyB:(PKPhysicsBody *)arg1 ;
-(BOOL)isEqualToJoint:(id)arg1 ;
-(CGVector)reactionForce;
-(double)reactionTorque;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(void)set_implicit:(BOOL)arg1 ;
-(unsigned*)_jointDef;
@end
