# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict
from enum import Enum

class ThrowHelperHandler(Enum):
    PRE_READ: ThrowHelperHandler = ...
    ON_READ: ThrowHelperHandler = ...
    POST_READ: ThrowHelperHandler = ...

class ThrowHelper:
    def __init__(self, handler: ThrowHelperHandler) -> None: ...
    def __enter__(self) -> None: ...
    def __exit__(self, exc_type, exc_val, exc_tb) -> None: ...  # pyre-ignore[2]