/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:33:27 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 20:37:53 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data myData;
    myData.id = 42;
    myData.name = "xzhen";
    myData.level = 5;

    Data* originalPtr = &myData;
    std::cout << "Original Pointer Address: " << originalPtr << std::endl;
    std::cout << "Data before serialization: ID=" << originalPtr->id << std::endl;
    std::cout << "Data before serialization: Name=" << originalPtr->name << std::endl;
    std::cout << "Data before serialization: Level=" << originalPtr->level << std::endl;
    

    std::cout << "------------------------------------------" << std::endl;
    //serialize
    uintptr_t raw = Serializer::serialize(originalPtr);
    std::cout << "Serialized uintptr_t: " << raw << std::endl;
    //deserialize
    Data* deserializedPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized Pointer Address: " << deserializedPtr << std::endl;

    
    std::cout << "------------------------------------------" << std::endl;

    if (deserializedPtr == originalPtr) {
        std::cout << "SUCCESS! Deserialized pointer matches the original pointer!" << std::endl;
        
        deserializedPtr->name = "xzhen_42";
        std::cout << "Verified Data Modification: " << originalPtr->name << std::endl;
    } else {
        std::cout << "FAILURE! Pointer mismatch! Something went wrong." << std::endl;
    }

    
    std::cout << "------------------------------------------" << std::endl;

    //test of instance
    //Serializer testObj; 
    //Serializer* testPtr = new Serializer();
    return 0;
}