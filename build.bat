protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\CommandBuff.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\ServerCommandBuff.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\ClientCommandBuff.proto

protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\SetValueSubCommand.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\ValueSettedSubCommand.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\GetResourceSubCommand.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\SystemSubCommand.proto
protoc --csharp_out=csharp --cpp_out=cpp --objc_out=objc proto\ManagerSubCommand.proto