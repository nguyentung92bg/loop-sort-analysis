/* IL2CPP: NakamaServices$$IsAuthenticated
bool NakamaServices__IsAuthenticated (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaServices$$IsAuthenticated
   bool NakamaServices__IsAuthenticated (const MethodInfo* method); */

uint NakamaServices__IsAuthenticated_2248500(void)

{
  uint uVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  uVar1 = NakamaServices__TryGetApi_2243784(&uStack_8);
  return uVar1 & 1;
}

