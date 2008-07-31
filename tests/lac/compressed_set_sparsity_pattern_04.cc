//----------------------------  compressed_set_sparsity_pattern_04.cc  ---------------------------
//    $Id$
//    Version: $Name$ 
//
//    Copyright (C) 2008 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//----------------------------  compressed_set_sparsity_pattern_04.cc  ---------------------------


// check CompressedSetSparsityPattern::copy operator with offdiagonals

#include "sparsity_pattern_common.h"

int main ()
{
  std::ofstream logfile("compressed_set_sparsity_pattern_04/output");
  logfile.setf(std::ios::fixed);
  deallog << std::setprecision(3);
  deallog.attach(logfile);
  deallog.depth_console(0);
  deallog.threshold_double(1.e-10);

  copy_with_offdiagonals_1<CompressedSetSparsityPattern> ();
}

  
  
