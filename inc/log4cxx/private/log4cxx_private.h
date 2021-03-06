/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LOG4CXX_PRIVATE_LOG4CXX_H
#define LOG4CXX_PRIVATE_LOG4CXX_H


#ifdef _MSC_VER
    #include <log4cxx/private/log4cxx_private_windows.h>
#else
    #include <log4cxx/private/log4cxx_private_unix.h>
#endif // _MSC_VER


#endif // LOG4CXX_PRIVATE_LOG4CXX_H
