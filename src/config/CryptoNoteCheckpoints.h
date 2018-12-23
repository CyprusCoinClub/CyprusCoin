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
  {      15000, "91be4ef43091f5b235edca820b105b7c8b36e019c0bf772ba2440c6b966457ca"},
  {      20000, "e415651ee21128c041ed940f3c70d292f108e15c2d3fab73996916faab3f8687"},
  {      25000, "8b9c9969eb64b17efe1a5a2b333f920e305fe7744c3df16e3eb60251ed327c5a"},
  {      30000, "05257ceef8d300f720e0019e0d97c78e4655900778d499a139f4ac354cbeb5f3"},
  {      35000, "c6eee4b0f3958b7590287d0c35686bd22a7bb919e8fb33005d1fb792b0419e83"},
  {      40000, "b5a820920c3e2e39ce491abd3e2dd13a5492f0331eb6c2655f758555ecaf7c1e"},
  {      45000, "aeb90fe60b0a4f652df17ad2af61866e1f5f9445e4b2bedc0fc5176bf9326b99"},
  {      50000, "af0368fedcaad92ac25efe9a3e386fdef027a9795feacf013fb07c5863671915"},
  {      55000, "c4eb858ac51abad2c8788700a09176ff554041c17a84876579e752235e66e6bf"},
  {      60000, "f7aed72f748301e06680f473fcae72058b7979037563e601f792098b580864bb"},
  {      65000, "60ffbc2d76db31fce8d86769138a93bf24d4f7a9d66a63f5d0281a8162f294a8"},
  {      70000, "56bc24adaf4c3a1afcf7f0b10814895321308c9ad642c0acb00b9b200102adb4"}
};
}
