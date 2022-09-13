/** \file
 *  \brief      Management of linker memory segments.
 */
 
/* ************************************************************************** */
/* WIDGET SEGMENTS                                                               */
/* ************************************************************************** */

/* **** CODE sections ******************************************************* */

#ifdef WIDGET_START_SEC_CODE
# undef WIDGET_START_SEC_CODE
# define START_SEC_CODE
#endif
#ifdef WIDGET_STOP_SEC_CODE
# undef WIDGET_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/* **** CONST sections ****************************************************** */

#ifdef WIDGET_START_SEC_CONST_UNSPECIFIED
# undef WIDGET_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif
#ifdef WIDGET_STOP_SEC_CONST_UNSPECIFIED
# undef WIDGET_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/* **** VAR ZERO INIT sections ********************************************** */

#ifdef WIDGET_START_SEC_VAR_ZERO_INIT_PTR
# undef WIDGET_START_SEC_VAR_ZERO_INIT_PTR
# define START_SEC_VAR_ZERO_INIT_PTR
#endif
#ifdef WIDGET_STOP_SEC_VAR_ZERO_INIT_PTR
# undef WIDGET_STOP_SEC_VAR_ZERO_INIT_PTR
# define STOP_SEC_VAR
#endif

/* **** VAR NO INIT sections ************************************************ */

#ifdef WIDGET_START_SEC_VAR_NOINIT_BOOLEAN
# undef WIDGET_START_SEC_VAR_NOINIT_BOOLEAN
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef WIDGET_STOP_SEC_VAR_NOINIT_BOOLEAN
# undef WIDGET_STOP_SEC_VAR_NOINIT_BOOLEAN
# define STOP_SEC_VAR
#endif

#ifdef WIDGET_START_SEC_VAR_NOINIT_8BIT
# undef WIDGET_START_SEC_VAR_NOINIT_8BIT
# define START_SEC_VAR_NOINIT_8BIT
#endif
#ifdef WIDGET_STOP_SEC_VAR_NOINIT_8BIT
# undef WIDGET_STOP_SEC_VAR_NOINIT_8BIT
# define STOP_SEC_VAR
#endif

#ifdef WIDGET_START_SEC_VAR_NOINIT_16BIT
# undef WIDGET_START_SEC_VAR_NOINIT_16BIT
# define START_SEC_VAR_NOINIT_16BIT
#endif
#ifdef WIDGET_STOP_SEC_VAR_NOINIT_16BIT
# undef WIDGET_STOP_SEC_VAR_NOINIT_16BIT
# define STOP_SEC_VAR
#endif

#ifdef WIDGET_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef WIDGET_START_SEC_VAR_NOINIT_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif
#ifdef WIDGET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef WIDGET_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# define STOP_SEC_VAR
#endif
