FROM scratch
ADD palindrome /
CMD ["./palindrome"]

EXPOSE 8000

# Add health check
HEALTHCHECK --interval=5s \
            --timeout=5s \
            CMD curl -f http://127.0.0.1:8000 || exit 1
