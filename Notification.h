//
//  Notification.h
//  MacDroidNotifier
//
//  Created by Rodrigo Damazio on 25/12/09.
//

#import <Cocoa/Cocoa.h>

typedef enum {
  RING,
  BATTERY,
  SMS,
  MMS,
  PING
} NotificationType;

// Class which keeps data about a single notification.
@interface Notification : NSObject {
 @private
  NSString *deviceId;
  NotificationType type;
  NSString *contents;
}

// The unique ID for the device that sent the notification
@property (nonatomic,readonly) NSString *deviceId;

// The type of notification
@property (nonatomic,readonly) NotificationType type;

// The textual contents of the notification
@property (nonatomic,readonly) NSString *contents;

// Parse a serialized notification string into a new notification object.
+ (Notification *)notificationFromString:(NSString *)serialized;

@end