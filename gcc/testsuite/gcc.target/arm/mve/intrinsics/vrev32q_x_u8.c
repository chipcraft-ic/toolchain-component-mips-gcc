/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

uint8x16_t
foo (uint8x16_t a, mve_pred16_t p)
{
  return vrev32q_x_u8 (a, p);
}

/* { dg-final { scan-assembler "vpst" } } */
/* { dg-final { scan-assembler "vrev32t.8"  }  } */

uint8x16_t
foo1 (uint8x16_t a, mve_pred16_t p)
{
  return vrev32q_x (a, p);
}

/* { dg-final { scan-assembler "vpst" } } */