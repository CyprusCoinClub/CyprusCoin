// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {          2, "1189824758aa6d3628b8187de1f1227feb5fd2c399226b0a9e0c857d4ecd16ff"},
  {       5000, "d8754d3f3c5166a804d604427a90aff48f96e5553f955e597268eae5900fed60"},
  {      10000, "f6771dba3d5fa932a88167620722d60e7e60623d3034321e9a57321f6c5a5cc6"},
  {      15000, "91be4ef43091f5b235edca820b105b7c8b36e019c0bf772ba2440c6b966457ca"}
};
}
