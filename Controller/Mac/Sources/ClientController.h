#import <Cocoa/Cocoa.h>
#import "RemotingClient.h"
#import "TemplateController.h"

@interface ClientController : NSWindowController
<RemotingClientDelegate, NSTableViewDelegate, NSTableViewDataSource>

@property(readonly,strong) RemotingClient *client;

-(instancetype)initWithClient:(RemotingClient*)client_;
@end
