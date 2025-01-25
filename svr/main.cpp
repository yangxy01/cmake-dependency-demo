#include <iostream>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>
#include "example.pb.h"

void PrintMessageFields(const google::protobuf::Message& message, const std::string& indent = "") {
    const google::protobuf::Descriptor* descriptor = message.GetDescriptor();
    const google::protobuf::Reflection* reflection = message.GetReflection();

    for (int i = 0; i < descriptor->field_count(); ++i) {
        const google::protobuf::FieldDescriptor* field = descriptor->field(i);

        std::cout << indent << "Field name: " << field->name() << std::endl;

        if (field->cpp_type() == google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE) {
            const google::protobuf::Message& nested_message = reflection->GetMessage(message, field);
            PrintMessageFields(nested_message, indent + "  ");
        }
    }
}

int main() {
    example::HelloRequest request;  
    PrintMessageFields(request);
    return 0;
}