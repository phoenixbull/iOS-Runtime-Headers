/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString;

@interface FTiMessageErrorMessage : FTiMessagePeerMessage <NSCopying> {
    NSString *_failedMessageID;
    NSNumber *_failureReason;
}

@property(copy) NSString * failedMessageID;
@property(copy) NSNumber * failureReason;

- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)failedMessageID;
- (id)failureReason;
- (id)messageBody;
- (void)setFailedMessageID:(id)arg1;
- (void)setFailureReason:(id)arg1;

@end
