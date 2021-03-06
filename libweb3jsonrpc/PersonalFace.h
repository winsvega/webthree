/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_DEV_RPC_PERSONALFACE_H_
#define JSONRPC_CPP_STUB_DEV_RPC_PERSONALFACE_H_

#include "ModularServer.h"

namespace dev {
    namespace rpc {
        class PersonalFace : public ServerInterface<PersonalFace>
        {
            public:
                PersonalFace()
                {
                    this->bindAndAddMethod(jsonrpc::Procedure("personal_newAccount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_STRING, NULL), &dev::rpc::PersonalFace::personal_newAccountI);
                    this->bindAndAddMethod(jsonrpc::Procedure("personal_unlockAccount", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_BOOLEAN, "param1",jsonrpc::JSON_STRING,"param2",jsonrpc::JSON_STRING,"param3",jsonrpc::JSON_INTEGER, NULL), &dev::rpc::PersonalFace::personal_unlockAccountI);
                    this->bindAndAddMethod(jsonrpc::Procedure("personal_sendTransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_STRING, "param1",jsonrpc::JSON_OBJECT,"param2",jsonrpc::JSON_STRING, NULL), &dev::rpc::PersonalFace::personal_sendTransactionI);
                    this->bindAndAddMethod(jsonrpc::Procedure("personal_listAccounts", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY,  NULL), &dev::rpc::PersonalFace::personal_listAccountsI);
                }

                inline virtual void personal_newAccountI(const Json::Value &request, Json::Value &response)
                {
                    response = this->personal_newAccount(request[0u].asString());
                }
                inline virtual void personal_unlockAccountI(const Json::Value &request, Json::Value &response)
                {
                    response = this->personal_unlockAccount(request[0u].asString(), request[1u].asString(), request[2u].asInt());
                }
                inline virtual void personal_sendTransactionI(const Json::Value &request, Json::Value &response)
                {
                    response = this->personal_sendTransaction(request[0u], request[1u].asString());
                }
                inline virtual void personal_listAccountsI(const Json::Value &request, Json::Value &response)
                {
                    (void)request;
                    response = this->personal_listAccounts();
                }
                virtual std::string personal_newAccount(const std::string& param1) = 0;
                virtual bool personal_unlockAccount(const std::string& param1, const std::string& param2, int param3) = 0;
                virtual std::string personal_sendTransaction(const Json::Value& param1, const std::string& param2) = 0;
                virtual Json::Value personal_listAccounts() = 0;
        };

    }
}
#endif //JSONRPC_CPP_STUB_DEV_RPC_PERSONALFACE_H_
